import treesitter from 'eslint-config-treesitter';

export default [
  ...treesitter,
  {
    rules: {
      'jsdoc/require-jsdoc': 'off',
    },
  },
];
